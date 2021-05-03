# Tarefas

- Definir a estrutura de classes
- Fazer um desing das partes que vão haver(Menus e afins)
- Escolher as imagens para o que foi selecionado no item anterior e as formigas

- Fazer o SimulationEnv
- Fazer um teste colocando os itens no jogo, formigueiro e comida
- Fazer um teste com uma formiga andando e criando rastros
- Fazer um teste com dus formigas andando, criando rastros e seguindo eles

- Fazer um teste com N formigas surgindo do formigueiro e buscando comida
- Fazer a tela de Menu

- Fazer a tela de Sobre

## Classes

- MenuPrincipal (tela)
- Sobre (tela)
- SimulationEnv (QGraphicsView)
- FormigueiroUnity (Um circulo de cor ??)
- ComidaUnity (Um circulo de cor ??)
- Formiga
  > - int id
  > - int objetivo (0 -> Comida, 1 -> Formigueiro)
- Rastro (Pode ficar visível, ou invisível pelas configs)
  > - int id
  - Para a comida
  - Para o formigueiro

## Funcionamento

Opções de config:

- Quantidade de formigas na simulação
- Visibilidade dos caminhos na simulação

Botão de iniciar simulação no menu principal e um botão sobre. Ao clicar no iniciar simulação abre-se uma nova janela com a simulação (Definir aqui as configurações, antes de iniciar ela? ou ja vem prefab?) ai clicar na rela com o botão direito no mouse surge uma unidade de formigueiro, ao clicar com o botão esquerdo do mouse surge uma comida; As formigas são geradas ao pressionar enter no inicio da simulação; A simulação pode ser pausada e despausada com a barra de espaço.

Cada unidade de forigueiro precisa de 2 unidades de comida para ficar bem. a simulação acaba quando todas as celulas do formigueiro estiverem preenchidas

## Definições

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
