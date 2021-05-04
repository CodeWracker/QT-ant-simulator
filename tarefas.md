# Tarefas

- [x] Definir a estrutura de classes
- [x] Fazer um design das partes que vão haver(Menus e afins)
  - [x] Menu
  - [x] About
  - [x] Configs
- [x] Escolher as imagens para o que foi selecionado no item anterior e as formigas</br></br>
- [ ] Fazer o SimulationEnv
- [ ] Fazer um teste colocando os itens no jogo, formigueiro e comida
- [ ] Fazer um teste com uma formiga andando e criando rastros
- [ ] Fazer um teste com dus formigas andando, criando rastros e seguindo eles
- [ ] Fazer um teste com N formigas surgindo do formigueiro e buscando comida</br></br>
- [ ] Fazer a tela de Menu
  - [x] Deixar Bonita
  - [x] Linkar com a simulação
- [x] Fazer a tela de Configurações
  - [x] Deixar Bonita
  - [x] Salvar os valores</br></br>
- [x] Fazer a tela de Sobre
  - [x] Deixar Bonita
  - [x] Linkar com os sites</br></br>
- [ ] Adicionar a função de borracha
- [ ] Fazer o ajustes necessários

## Classes

- MenuPrincipal (tela)
- Sobre (tela)
- Configurações
- SimulationEnv (QGraphicsView)
- FormigueiroUnity (Um circulo de cor ??)
  > - bool formigasGeradas
  > - int estoque
- ComidaUnity (Um circulo de cor ??)
- Formiga
  > - int id
  > - int objetivo (0 -> Comida, 1 -> Formigueiro)
  > - \*imagem(esqueci a classe la) food(Quando pega uma comida, guarda nessa variável, e se ela não estiver nula renderiza o circulo, só que menor em cima da formiga)
  > - int ultimoIdComida
  > - int ultimoIdFormigueiro
- Rastro (Pode ficar visível, ou invisível pelas configs)
  > - int id
  > - int passosRestantes
  - Para a comida
  - Para o formigueiro

## Funcionamento

Opções de config:

- Quantidade de formigas na simulação
- Visibilidade dos caminhos na simulação

Botão de iniciar simulação no menu principal e um botão sobre. Ao clicar no iniciar simulação abre-se uma nova janela com a simulação, de acordo com as configurações definidas, ai clicar na tela com o botão direito no mouse surge uma unidade de formigueiro, ao clicar com o botão esquerdo do mouse surge uma comida; As formigas são geradas ao pressionar enter no inicio da simulação; A simulação pode ser pausada e despausada com a barra de espaço.

Cada unidade de formigueiro precisa de 2 unidades de comida para ficar bem. a simulação acaba quando todas as células do formigueiro estiverem preenchidas

Se apertar CTRL ativa/desativa o modo borracha, que apaga qualquer coisa menos as formigas

## Definições

Cor do Fundo: #36393f

- A formiga só deixa rastro de caminho para trás quando não está seguindo um caminho.
- O caminho deve ter ua identificação do ID da formiga que botou ele e um id numérico incremental próprio
- Quando uma formiga for seguir um tipo de caminho ela vai seguir na direção que ele diminui o seu ID, para poder chegar no objetivo
- A formiga anda aleatóriamente quando não estiver seguindo um caminho
  - A direção aleatória do caminho é decidida pelo angulo em relação à sua orientação atual, mas limitado a poder se virar em +/- 90 graus, para evitar que fique indo para frente e para trás
  - Ao spawnar uma formiga no inicio do jogo a sua orientação é definida aleatóriamente
  - Existe uma probabilidade pequena de uma formiga simplesmente sair da trilha (acredito que isso permita que atalhos sejam criados)
- A cada 50ms o estado da simulação é atualizado
- A formiga anda a mesma quantidade de pixels que seu tamanho por passo na simulação.
- Uma formiga só pode depositar comida em um formigueiro que não está preenchido
- Cada unidade de formigueiro gera 10 formigas
- O caminho some depois de X passos da simulação
